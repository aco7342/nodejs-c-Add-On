// testcb.js
const addoncb = require('./build/Release/addoncb');

addoncb( function(msg) {
  console.log(msg); // 'hello world'
});
