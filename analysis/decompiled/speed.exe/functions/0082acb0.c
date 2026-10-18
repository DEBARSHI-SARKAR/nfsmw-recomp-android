/* speed.exe 0082acb0 FUN_0082acb0; analysis pseudocode, not buildable source.
 * calls 0081f86b FUN_0081f86b
 * calls 008294a0 FUN_008294a0
 */

undefined4 __thiscall FUN_0082acb0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x74))(param_2);
  uVar2 = 0;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1[7] != -1)) {
    if (puVar1[6] == 0) {
      uVar2 = FUN_0081f86b(puVar1[7]);
      FUN_008294a0(puVar1[8]);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[7] = 0xffffffff;
    puVar1[4] = 0xffffffff;
  }
  return uVar2;
}

