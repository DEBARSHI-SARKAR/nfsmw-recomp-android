/* speed.exe 007a1230 FUN_007a1230; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 007a0eb0 FUN_007a0eb0
 */

void FUN_007a1230(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  puVar2 = &DAT_009b4250;
  do {
    puVar3 = puVar2;
    if (puVar2[1] == param_2) break;
    puVar2 = puVar2 + 7;
    puVar3 = (undefined4 *)0x0;
  } while ((int)puVar2 < 0x9b42a4);
  iVar1 = puVar3[4];
  puVar3[4] = local_4;
  if (local_4 == 4) {
    if (iVar1 != 3) {
      FUN_007a0eb0(param_2,*puVar3);
      return;
    }
  }
  else if (local_4 == 6) {
    local_4 = 0;
    FUN_0078a3a0(&local_4,0x20);
    puVar3[3] = local_4;
  }
  return;
}

