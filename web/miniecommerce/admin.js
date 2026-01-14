async function load() {
  const res = document.getElementById("adminProducts");
  const data = await fetch("products.json");
  const products = await data.json();
  products.forEach((p) => {
    list.innerHTML += "${p.name} - ${p.price}";
  });
}
