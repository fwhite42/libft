const {
	execSync,
	spawn

} = require("child_process")

const {
	argv
} = require("process");

const config = require("config")
const reductor = [
	(x, y) => Buffer.concat([x, y]),
	Buffer.alloc(0)
]

function itoa(x){
	return spawn("./bin/itoa.exe", [x])
		.stdout
		.reduce(...reductor)
		.then(x => x.toString())
}

async function main()
{
	console.log()
}

main()
