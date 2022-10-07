/* In this git file i conclude some CSS Selectors and implement them on a simple HTML webpage */

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CssSelectors</title>
    <style>
        /*element selector*/
        p {
            border: 2px dotted lightcoral;
        }

        /* Id selector */
        #FirstPara {
            color: yellow;
            background-color: green;
        }

        /* classs selector */
        .redElement {
            color: red;
        }

        /* class selector */
        .bgBlue {
            background-color: blue;
        }

        /*this is grouping selector*/
        footer,
        span {
            color: aqua;
            background-color: bisque;
        }
    </style>
</head>

<body>

    <h2>CSS Selectors</h2>
    <p id=FirstPara>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Corrupti, veniam eos. Natus sequi deserunt
        alias eos,mollitia molestias eaque, dignissimos, consectetur libero repudiandae sapiente dolores soluta
        doloremque velmaiores temporibus?</p>
    <p>this is just a paragraph only</p>
    <p id="seecondPara" class="redElement bgBlue"> Lorem ipsum dolor sit amet consectetur adipisicing elit. Laudantium
        architecto distinctio explicabo? Nulla aperiam, voluptas temporibus quia praesentium delectus sapiente
        perferendis totam laborum exercitationem, molestiae tempore tenetur, laboriosam optio quae.
        Nostrum</p>
    <div>

        <p>this is my parsagraph to demostrate div selectors</p>
        <span>this is span</span>
    </div>
    <footer>this is footer</footer>

</body>

</html>
