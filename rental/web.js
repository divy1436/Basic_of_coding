const bookButtons = document.querySelectorAll('.book-button');

// Show the booking form and set the selected cycle type in a new tab
bookButtons.forEach(button => {
    button.addEventListener('click', function() {
        const cycleType = this.getAttribute('data-cycle');

        // Open a new tab for the booking form
        const newTab = window.open('', '_blank'); // Open a new tab

        // Write the HTML for the booking form in the new tab
        newTab.document.write(`
            <!DOCTYPE html>
            <html lang="en">
            <head>
                <meta charset="UTF-8">
                <meta name="viewport" content="width=device-width, initial-scale=1.0">
                <title>Booking - ${cycleType}</title>
                <link rel="stylesheet" href="web.css"> <!-- Link to the CSS file -->
            </head>
            <body>
                <header>
                    <h1>Booking for ${cycleType}</h1>
                </header>
                <main>
                    <form id="rental-form">
                        <label for="user-name">Your Name:</label>
                        <input type="text" id="user-name" name="user-name" required><br>

                        <label for="rental-days">Rental Days:</label>
                        <input type="number" id="rental-days" name="rental-days" min="1" required><br>

                        <h1>Additional Services:</h1>
                        <input type="checkbox" id="helmet" name="helmet"> <label for="helmet">Helmet Rental</label><br>
                        <input type="checkbox" id="lock" name="lock"> <label for="lock">Lock Rental</label><br>
                        <input type="checkbox" id="bag" name="bag"> <label for="bag">Bag Rental</label><br>
                        <input type="checkbox" id="tour" name="tour"> <label for="tour">Guided Tour</label><br>
                        <input type="checkbox" id="delivery" name="delivery"> <label for="delivery">Delivery Service</label><br>

                        <h1>Payment Method:</h1>
                        <input type="radio" id="credit" name="payment-method" value="Credit Card" checked>
                        <label for="credit">Credit Card</label><br>
                        <input type="radio" id="paypal" name="payment-method" value="PayPal">
                        <label for="paypal">PayPal</label><br>
                        
                        <button type="submit">Proceed to Confirmation</button>
                    </form>
                </main>

                <script>
                    // Handle form submission in the new tab
                    document.getElementById('rental-form').addEventListener('submit', function(event) {
                        event.preventDefault(); // Prevent form submission from reloading the page

                        const rentalDays = document.getElementById('rental-days').value;
                        const userName = document.getElementById('user-name').value;

                        // Collect additional services
                        const selectedServices = [];
                        if (document.getElementById('helmet').checked) selectedServices.push('Helmet Rental');
                        if (document.getElementById('lock').checked) selectedServices.push('Lock Rental');
                        if (document.getElementById('bag').checked) selectedServices.push('Bag Rental');
                        if (document.getElementById('tour').checked) selectedServices.push('Guided Tour');
                        if (document.getElementById('delivery').checked) selectedServices.push('Delivery Service');

                        // Get selected payment method
                        const paymentMethod = document.querySelector('input[name="payment-method"]:checked').value;

                        // Open a confirmation tab
                        const confirmationTab = window.open('', '_blank');
                        confirmationTab.document.write(\`
                            <!DOCTYPE html>
                            <html lang="en">
                            <head>
                                <meta charset="UTF-8">
                                <meta name="viewport" content="width=device-width, initial-scale=1.0">
                                <title>Booking Confirmation</title>
                                <link rel="stylesheet" href="web.css"> <!-- Link to the CSS file -->
                            </head>
                            <body>
                                <header>
                                    <h1>Booking Confirmation</h1>
                                </header>
                                <main>
                                    <p>Thank you \${userName}! You have successfully booked the \${cycleType} for \${rentalDays} days.</p>
                                    <p>Additional Services: \${selectedServices.length ? selectedServices.join(', ') : 'None'}</p>
                                    <p>Payment Method: \${paymentMethod}</p>
                                </main>
                            </body>
                            </html>
                        \`);
                        confirmationTab.document.close(); // Close the document to render the confirmation tab

                        // Clear the form after submission
                        this.reset();
                    });
                </script>
            </body>
            </html>
        `);
        newTab.document.close(); // Close the document to render the new tab
    });
});
