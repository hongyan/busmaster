;=== Test Cases/Test Data ===
; UseCase 9:		J1939-Command Address
; Critical (C):		Y
; TestCase No.:		TC_UC10_01
; TestCases:		Create or load configuration(cfx) files
; Test Strategy:	Black Box
; Test Data:		-
; === Test Procedure ===

ConsoleWrite(@CRLF)
ConsoleWrite(@CRLF)
ConsoleWrite("***********UseCase 10 Script Execution Started************"&@CRLF)
ConsoleWrite("****Start : TC_UC10_01.au3****"&@CRLF)
_launchApp()													; invoke the application and run the Process
sleep(1000)
if WinExists("BUSMASTER") then
	_loadConfig("UseCase4.cfx")									; load cfx file	
EndIf

ConsoleWrite("****End : TC_UC10_01.au3****"&@CRLF)
ConsoleWrite(@CRLF)
ConsoleWrite(@CRLF)
