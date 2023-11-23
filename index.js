const {stdout, argv} = require("process")
const {execFile} = require("child_process")
execFile("./libtest/bin/" + argv[2], argv.slice(3)).stdout.pipe(stdout)
