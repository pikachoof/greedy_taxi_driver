$input_generator = "./input_generator.exe"
$solution = "./solution.exe"

$input_file = "input.txt"
$output_file = "output.txt"

& $input_generator > $input_file
Get-Content $input_file | & $solution > $output_file
#"`n" >> $output_file
