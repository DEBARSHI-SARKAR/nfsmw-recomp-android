/* speed.exe 00791f70 FUN_00791f70; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00735ad0 FUN_00735ad0
 * calls 0075f4f0 FUN_0075f4f0
 */

void FUN_00791f70(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  if (DAT_009b0858 != 0) {
    local_4 = 0;
    FUN_0078a3a0(&local_4,DAT_009b4404);
    iVar1 = DAT_009b4408 + local_4;
    local_4 = 0;
    FUN_0078a3a0(&local_4,DAT_009b456c);
    iVar2 = DAT_009b4570 + local_4;
    iVar3 = FUN_00735ad0(iVar1);
    if (iVar3 != 0) {
      FUN_0075f4f0(iVar1,param_1,iVar2);
    }
  }
  return;
}

