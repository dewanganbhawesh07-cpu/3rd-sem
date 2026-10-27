document.getElementById('regForm').addEventListener('submit', function(e) {
    e.preventDefault();
    const name = document.getElementById('fullName').value.trim();
    const email = document.getElementById('email').value.trim();
    
    if (name.length < 3) {
        document.getElementById('nameError').style.display = 'block';
        return;
    } else {
        document.getElementById('nameError').style.display = 'none';
    }

    const emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailPattern.test(email)) {
        document.getElementById('emailError').style.display = 'block';
        return;
    } else {
        document.getElementById('emailError').style.display = 'none';
    }

    alert('Form validated and submitted successfully for ' + name + '!');
});
