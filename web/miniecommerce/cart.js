function getCart() {
  return JSON.parse(localStorage.getItem("cart") || "[]");
}
function saveCart(cart) {
  localStorage.setItem("cart", JSON.stringify(cart));
}
function add(id) {
  const cart = getCart();
  cart.push(id);
  saveCart(cart);
}
function remove(id) {
  const cart = getCart(id);
  cart.splice(id);
  saveCart(cart);
}
