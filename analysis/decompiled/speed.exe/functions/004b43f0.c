/* speed.exe 004b43f0 FUN_004b43f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004b43f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00896c60;
  iVar2 = 0x10;
  puVar1 = param_1;
  do {
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  DAT_00912100 = param_1;
  param_1[1] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return;
}

