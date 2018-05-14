; EEPROM Adress Allocation Scheme
; Total length is 8 bytes per product
;
; This is what it should be:
; 0 = Index/position of the product
; 1 = Price (float)
; 2 = Price (float)
; 3 = Price (float)
; 4 = Price (float)
; 5 = The port number of the PortServo
; 6 = The port number of the HoldServo
; 7 = Number of products in tray (CurrentQuantity)

	lb	$t3, ($t0)	; load $t3
	sb	$t3, ($t1)	; store contents of $t3
