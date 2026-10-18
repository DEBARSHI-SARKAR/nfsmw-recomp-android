/* speed.exe 007a11d0 FUN_007a11d0; analysis pseudocode, not buildable source.
 * calls 007a0910 FUN_007a0910
 * calls 0078efd0 FUN_0078efd0
 * calls 00735c10 FUN_00735c10
 */

void FUN_007a11d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_009b4250;
  do {
    if (puVar2[1] == param_1) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar1 = *puVar2;
        FUN_0078efd0(param_1);
        FUN_00735c10(uVar1,param_2);
        FUN_007a0910(param_1,uVar1,param_2);
      }
      return;
    }
    puVar2 = puVar2 + 7;
  } while ((int)puVar2 < 0x9b42a4);
  return;
}

