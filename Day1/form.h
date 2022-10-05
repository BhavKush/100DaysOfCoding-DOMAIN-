/* Dummy Inquiry form using HTML And CSS (This is just a HTML Form Page*/

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Customer Inquiry Form</title>
    <link rel="stylesheet" href="Dummy_inquiry_form.css">
</head>
<body>
    <div class="container">
    <form>
    <header>
    <h2>Contact Form</h2>
    <p class="main">Fill all the texts in fields</p>
    </header>
    
    <hr>
    <p>Your Name: <input type="text" name="name" id="name"required placeholder="Your Full Name"></p>
    <p>Your Email:<input type="email" name="email" id="email"required placeholder="Valid Email Address"></p>
    <p>Message: <textarea name="message" id="message" cols="30" rows="10" placeholder="Your Message to Us"></textarea></p>
    <p>
        Subject:
        <select name="reason" id="reason">
            <option value="--Select Your Enquiry Domain--">--Select Your Enquiry Domain--</option>
            <option value="Career Enquiry">Career Enquiry</option>
            <option value="Product Enquiry">Product Enquiry</option>
            <option value="Customer Enquiry">Customer Enquiry</option>
            <option value="Employee Enquiry">Employee Enquiry</option>
            <option value="Complaint Enquiry">Complaint Enquiry</option>
        </select>
    </p>
    <input type="submit" value="Send">
    </form>
    </div>

</body>
</html>
