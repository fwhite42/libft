#include<stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

// SHA-256 constants
#define SHA256_BLOCK_SIZE 32
#define ROTRIGHT(word, bits) (((word) >> (bits)) | ((word) << (32 - (bits))))
#define CH(x, y, z) (((x) & (y)) ^ (~(x) & (z)))
#define MAJ(x, y, z) (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))
#define EP0(x) (ROTRIGHT(x, 2) ^ ROTRIGHT(x, 13) ^ ROTRIGHT(x, 22)))
#define EP1(x) (ROTRIGHT(x, 6) ^ ROTRIGHT(x, 11) ^ ROTRIGHT(x, 25)))
#define SIG0(x) (ROTRIGHT(x, 7) ^ ROTRIGHT(x, 18) ^ ((x) >> 3))
#define SIG1(x) (ROTRIGHT(x, 17) ^ ROTRIGHT(x, 19) ^ ((x) >> 10))

// SHA-256 functions
uint32_t sha256_k[] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};

void sha256_transform(uint32_t *state, const unsigned char *data) {
    uint32_t m[64];
    uint32_t s0, s1;
    uint32_t t1, t2;
    uint32_t ch, maj;
    uint32_t temp1, temp2;
    uint32_t h[8];

    // Initialize variables
    for (int i = 0; i < 8; i++) {
        h[i] = state[i];
    }

    for (int i = 0; i < 16; i++) {
        m[i] = (data[i * 4] << 24) | (data[i * 4 + 1] << 16) | (data[i * 4 + 2] << 8) | data[i * 4 + 3];
    }

    for (int i = 16; i < 64; i++) {
        m[i] = SIG1(m[i - 2]) + m[i - 7] + SIG0(m[i - 15]) + m[i - 16];
    }

    for (int i = 0; i < 64; i++) {
        s1 = ROTRIGHT(h[4], 6) ^ ROTRIGHT(h[4], 11) ^ ROTRIGHT(h[4], 25);
        ch = CH(h[4], h[5], h[6]);
        temp1 = h[7] + s1 + ch + sha256_k[i] + m[i];
        s0 = ROTRIGHT(h[0], 2) ^ ROTRIGHT(h[0], 13) ^ ROTRIGHT(h[0], 22);
        maj = MAJ(h[0], h[1], h[2]);
        temp2 = s0 + maj;

        h[7] = h[6];
        h[6] = h[5];
        h[5] = h[4];
        h[4] = h[3] + temp1;
        h[3] = h[2];
        h[2] = h[1];
        h[1] = h[0];
        h[0] = temp1 + temp2;
    }

    for (int i = 0; i < 8; i++) {
        state[i] += h[i];
    }
}

void sha256(const unsigned char *message, size_t len, unsigned char *digest) {
    uint32_t state[8] = {
        0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
        0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};

    size_t block_num = (len + 8) / 64 + 1;
    uint8_t *padded_message = malloc(block_num * 64);
    memset(padded_message, 0, block_num * 64);
    memcpy(padded_message, message, len);
    padded_message[len] = 0x80;

    uint64_t bitlen = len * 8;
    memcpy(padded_message + block_num * 64 - 8, &bitlen, sizeof(bitlen));

    for (size_t i = 0; i < block_num; i++) {
        sha256_transform(state, padded_message + i * 64);
    }

    for (int i = 0; i < 8; i++) {
        digest[i * 4] = (state[i] >> 24) & 0xFF;
        digest[i * 4 + 1] = (state[i] >> 16) & 0xFF;
        digest[i * 4 + 2] = (state[i] >> 8) & 0xFF;
        digest[i * 4 + 3] = state[i] & 0xFF;
    }

    free(padded_message);
}

int main() {
    const char *message = "okgo";
    unsigned char digest[SHA256_BLOCK_SIZE];

    sha256((const unsigned char *)message, strlen(message), digest);

    printf("SHA-256 digest: ");
    for (int i = 0; i < SHA256_BLOCK_SIZE; i++) {
        printf("%02x", digest[i]);
    }
    printf("\n");

    return 0;
}

