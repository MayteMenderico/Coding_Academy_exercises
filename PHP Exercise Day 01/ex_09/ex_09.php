<?php

function print_movie_from_nbr(int $nbr):void {
    switch($nbr) {
        case 3:
            echo "The Three brothers";
        break;
        case 6:
            echo "The Sixth Sense";
        break;
        case 23:
            echo "The Number 23";
        break;
        case 28:
            echo "28 Days Later";
        break;
        default:
            echo "I don't know";
        
    }
    echo "<br />";
}
echo print_movie_from_nbr(3);
print_movie_from_nbr(6);
print_movie_from_nbr(23);
print_movie_from_nbr(28); 
print_movie_from_nbr(30);

?>