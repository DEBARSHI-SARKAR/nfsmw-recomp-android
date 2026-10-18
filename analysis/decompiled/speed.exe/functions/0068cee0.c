/* speed.exe 0068cee0 FUN_0068cee0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0068cee0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_24 [8];
  undefined1 local_4;
  undefined1 local_3;
  
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_24[4] = 0;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  local_4 = 0;
  local_3 = 0;
  puVar2 = local_24;
  puVar3 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

