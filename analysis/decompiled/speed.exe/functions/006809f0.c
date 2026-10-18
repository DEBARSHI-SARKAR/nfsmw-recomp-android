/* speed.exe 006809f0 FUN_006809f0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0067dce0 FUN_0067dce0
 * calls 0067af40 FUN_0067af40
 * calls 00675c30 FUN_00675c30
 */

void __fastcall FUN_006809f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = *(int *)param_1[0x25];
  if ((int *)local_c != (int *)param_1[0x25]) {
    do {
      iVar4 = local_c;
      iVar1 = *(int *)(local_c + 0x10);
      if (iVar1 != 0) {
        local_4 = *(undefined4 *)(local_c + 0xc);
        piVar2 = (int *)param_1[0x28];
        for (piVar3 = (int *)*piVar2; local_8 = iVar1, piVar3 != piVar2; piVar3 = (int *)*piVar3) {
          if (piVar3[2] == iVar1) {
            if (piVar3 != piVar2) {
              FUN_0067af40(&local_10,*piVar3,piVar2,piVar3,&local_8);
              piVar3 = local_10;
            }
            break;
          }
        }
        local_10 = piVar3;
        if (local_10 != (int *)param_1[0x28]) {
          *(int *)local_10[1] = *local_10;
          *(int *)(*local_10 + 4) = local_10[1];
          FUN_005d0370(local_10,0xc,0);
          param_1[0x29] = param_1[0x29] + -1;
        }
        FUN_0067dce0(iVar1);
        *(undefined4 *)(iVar4 + 0x10) = 0;
        (**(code **)(*param_1 + 0x10))(&local_4);
      }
      FUN_00675c30();
    } while (local_c != param_1[0x25]);
  }
  return;
}

