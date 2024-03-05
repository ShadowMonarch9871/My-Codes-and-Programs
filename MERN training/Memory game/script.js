const tilesContainer = document.querySelector(".tiles");
const colors = [
  "Blue",
  "Lavender",
  "Yellow",
  "Green",
  "Red",
  "Pink",
  "Indigo",
  "Orange",
];
const colorPicklist = [...colors, ...colors];
const tileCount = colorPicklist.length;

for (let i = 0; i < tileCount; i++) {
  const randomIndex = Math.floor(Math.random() * tileCount);
  const color = colorPicklist[randomIndex];
  const tile = buildMyTile(color);
  colorPicklist.splice(randomIndex, 1);
  tilesContainer.appendChild(tile);
}
function buildMyTile(color) {
  const element = document.createElement("div");
  element.classList.add("tile");
  element.addEventListener("click", () => {
    element.style.backgroundColor = color;
  });
  return element;
}
