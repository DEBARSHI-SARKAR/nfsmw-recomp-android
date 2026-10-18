/* speed.exe 0072e8f0 FUN_0072e8f0; analysis pseudocode, not buildable source.
 * calls 0072dac0 FUN_0072dac0
 * calls 0072e890 FUN_0072e890
 * calls 00727de0 FUN_00727de0
 */

void __fastcall FUN_0072e8f0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  bVar2 = true;
  do {
    if ((1 < iVar4) || (!bVar2)) {
      return;
    }
    iVar4 = 0;
    iVar6 = 0;
    local_4 = 0x7fffffff;
    if (*(int *)(param_1 + 0x2c0) < 1) {
LAB_0072e97f:
      bVar2 = false;
    }
    else {
      piVar5 = (int *)(param_1 + 0x2c4);
      do {
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0xc) == 1) {
          iVar3 = *(int *)(iVar1 + 0x48);
          if (*(int *)(iVar1 + 0x50) != 0) {
            iVar3 = -1;
          }
          if (iVar3 < local_4) {
            iVar4 = iVar1;
            local_4 = iVar3;
          }
        }
        else if (*(int *)(iVar1 + 0xc) == 3) {
          FUN_00727de0(iVar1);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x2c0));
      if (iVar4 == 0) goto LAB_0072e97f;
      if (*(int *)(iVar4 + 0x50) == 0) {
        FUN_0072dac0(iVar4);
      }
      else {
        FUN_0072e890(*(int *)(iVar4 + 0x50));
      }
    }
    iVar4 = *(int *)(param_1 + 0x20);
  } while( true );
}

