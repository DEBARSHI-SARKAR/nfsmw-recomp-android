/* speed.exe 0056c5e0 FUN_0056c5e0; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_0056c5e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)((int)param_1 + 0x231) = 0;
  *(undefined1 *)((int)param_1 + 0x232) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x80] = 2;
  return param_1;
}

