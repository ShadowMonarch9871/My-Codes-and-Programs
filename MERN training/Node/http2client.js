const http2 = require("http2");
const client = http2.connect("http://127.0.0.1:8086");
const req = client.request({ method: "GET", ":path": "/" });
let data = "";
req.on("response", (responseHeaders) => {
  console.log("Fetching data from server");
});
req.on("data", (chunk) => {
  data += chunk;
});
req.on("end", () => {
  console.log(data);
  client.destroy();
});
