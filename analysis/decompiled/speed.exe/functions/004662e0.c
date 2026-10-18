/* speed.exe 004662e0 FUN_004662e0; analysis pseudocode, not buildable source.
 * calls 00465d80 FUN_00465d80
 */

void FUN_004662e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00465d80(param_1 + 3U & 0xfffffffc,param_2,param_3,param_4);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_00910ef8 == 1) {
    *DAT_00910f00 = puVar2;
    puVar1 = puVar2;
    puVar2[1] = DAT_00910f00;
    DAT_00910f00 = puVar1;
    *puVar2 = &DAT_00910efc;
  }
  return;
}

