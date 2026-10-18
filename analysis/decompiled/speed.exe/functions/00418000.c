/* speed.exe 00418000 FUN_00418000; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00418000(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  param_1[3] = param_2;
  *param_1 = &PTR_FUN_00891100;
  param_1[4] = DAT_008a2fb4;
  param_1[5] = DAT_008a2fb8;
  param_1[6] = DAT_008a2fbc;
  param_1[7] = 0;
  param_1[8] = DAT_008a2fb4;
  param_1[9] = DAT_008a2fb8;
  param_1[10] = DAT_008a2fbc;
  *(undefined1 *)(param_1 + 0xb) = 0;
  puVar1 = param_1 + 1;
  *DAT_0090d87c = puVar1;
  puVar2 = puVar1;
  param_1[2] = DAT_0090d87c;
  DAT_0090d87c = puVar2;
  *puVar1 = &DAT_0090d878;
  return;
}

