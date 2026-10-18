/* speed.exe 00728620 FUN_00728620; analysis pseudocode, not buildable source.
 * calls 00728430 FUN_00728430
 */

void __fastcall FUN_00728620(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_c;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    local_c = (int *)(param_1 + 0x2c4);
    do {
      iVar1 = *local_c;
      iVar5 = 99;
      iVar4 = 0;
      iVar3 = param_1 + 0xc0;
      do {
        if ((((int)*(char *)(iVar1 + 0xb) & 1 << ((byte)iVar4 & 0x1f)) != 0) &&
           (iVar2 = FUN_00728430(iVar1,iVar3,0), iVar2 < iVar5)) {
          iVar5 = iVar2;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 100;
      } while (iVar4 < 2);
      *(int *)(iVar1 + 0x48) = iVar5 * 100000 + *(int *)(iVar1 + 0x24);
      local_4 = local_4 + 1;
      local_c = local_c + 1;
    } while (local_4 < *(int *)(param_1 + 0x2c0));
  }
  return;
}

