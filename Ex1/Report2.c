  int led_status = 0;
  int count = 0;
  while (1)
  {
	  switch(led_status)
	  {
	  	  case 0:
	  	  {
	  		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  		  if (count >= 1)
	  		  {
	  			  count = 0;
	  			  led_status = 1;
	  		  }
	  		  else
	  		  {
	  			  count++;
	  		  }
	  		  break;
	  	  }
	  	  case 1:
	  	  {
	  		  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  		  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  		  if (count >= 1)
	  		  {
	  			  count = 0;
	  			  led_status = 0;
	  		  }
	  		  else
	  		  {
	  			  count++;
	  		  }
	  		  break;
	  	  }
	  }
	  HAL_Delay(1000);

  }