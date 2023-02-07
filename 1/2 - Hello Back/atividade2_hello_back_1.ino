# define LED_VERMELHO 13 // Pino do LED
# define BOTAO_1 9 // Pino do botao
void setup () {
pinMode ( LED_VERMELHO , OUTPUT ) ; // LED_VERMELHO como s a Ã d a
pinMode ( BOTAO_1 , INPUT_PULLUP ) ; // BOTAO_1 como entrada
digitalWrite ( LED_VERMELHO , LOW) ;
}
// the loop routine runs over and over again forever :
void loop () {
while ( digitalRead ( BOTAO_1 ) == HIGH ) ;
digitalWrite ( LED_VERMELHO , ( digitalRead ( LED_VERMELHO ) + 1) %2) ;
delay (100) ;
}