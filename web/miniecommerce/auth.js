async function login() {
  const res = await fetch("users.json");
  const users = await res.json();

  const name = document.getElementById("username").value;
  const pass = document.getElementById("password").value;

  const user = users.find((x) => x.username === name && x.password === pass);

  if (!user) {
    alert("WRONG USERNAME OR PASSWORD");
    return;
  }

  localStorage.setItem("user", JSON.stringify(user));

  if (user.role === "admin") location.href = "admin.html";
  else location.href = "index.html";
}
