/* speed.exe 005c0830 FUN_005c0830; analysis pseudocode, not buildable source.
 * calls 005ad440 FUN_005ad440
 * calls 005bffe0 FUN_005bffe0
 * calls 005b5900 FUN_005b5900
 */

undefined4 * __thiscall FUN_005c0830(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x30);
  }
  else {
    puVar1 = (undefined4 *)FUN_005ad440();
  }
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_005c0860:
      puVar1 = (undefined4 *)FUN_005bffe0();
      if (puVar1 == (undefined4 *)0x0) {
        iRam0000000c = param_2;
        FUN_005b5900(0);
        return (undefined4 *)0x0;
      }
      puVar1[1] = 0xabadcafe;
      puVar1[2] = 0xabadcafe;
      *puVar1 = &PTR_FUN_008a2c24;
      puVar1[3] = param_2;
      FUN_005b5900(puVar1);
      return puVar1;
    }
    if (param_2 <= (int)puVar1[3]) {
      if (puVar1[3] == param_2) {
        return puVar1;
      }
      goto LAB_005c0860;
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}

