#incl


void a (void)
{
GPIO_voidSetPinValue(GPIOA,PIN2,HIGH);
STK_voidSetBusyWait( 1000000 );
GPIO_voidSetPinValue(GPIOA,PIN2,LOW);
STK_voidSetBusyWait( 1000000 );

}

int main(void)
{
EXTI_voidCallBack(a);

return 0;
}