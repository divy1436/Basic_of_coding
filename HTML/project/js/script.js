// Navigation link event listeners
document.querySelectorAll('header ul li a').forEach(link => {
    link.addEventListener('click', (event) => {
        event.preventDefault();  // Prevents default link behavior
        console.log(`Navigated to: ${link.textContent.trim()}`);
        alert(`You clicked on ${link.textContent.trim()}`);
    });
});

// Search bar focus effect
const searchInput = document.querySelector('main input');
searchInput.addEventListener('focus', () => {
    searchInput.style.backgroundColor = '#ffe6e6';
});
searchInput.addEventListener('blur', () => {
    searchInput.style.backgroundColor = '#fff';
});
