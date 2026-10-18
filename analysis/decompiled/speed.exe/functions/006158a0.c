/* speed.exe 006158a0 FUN_006158a0; analysis pseudocode, not buildable source.
 * calls 006063c0 FUN_006063c0
 * calls 00613eb0 FUN_00613eb0
 * calls 006137d0 FUN_006137d0
 * calls 00614f40 FUN_00614f40
 */

void FUN_006158a0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_60 [20];
  int local_4c;
  undefined1 local_40 [64];
  
  iVar2 = FUN_006063c0(param_1,param_2,local_60);
  if (iVar2 != 0) {
    FUN_00614f40(param_1,&DAT_008a46ec,local_60);
    if (0 < local_4c) {
      FUN_006137d0(param_1,"%s:%d: ",local_40,local_4c);
      return;
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 4;
  uVar3 = FUN_00613eb0(param_1,&DAT_00890978,0);
  puVar1[1] = uVar3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

