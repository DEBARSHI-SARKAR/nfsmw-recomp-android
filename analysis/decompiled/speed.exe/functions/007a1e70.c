/* speed.exe 007a1e70 FUN_007a1e70; analysis pseudocode, not buildable source.
 * calls 00516e10 FUN_00516e10
 * calls 00516e20 FUN_00516e20
 */

char * FUN_007a1e70(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  FUN_00516e10();
  uVar1 = FUN_00516e20();
  switch(uVar1) {
  case 2:
    return "career_safehouse";
  case 3:
    return "customization_shop";
  case 4:
    return "backroom";
  case 5:
    return "car_lot";
  }
  pcVar2 = "career_manager";
  if ((*(uint *)(DAT_0091cf90 + 300) >> 8 & 1) == 0) {
    pcVar2 = "main_fe";
  }
  return pcVar2;
}

