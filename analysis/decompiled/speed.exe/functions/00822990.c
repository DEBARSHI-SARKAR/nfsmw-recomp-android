/* speed.exe 00822990 FUN_00822990; analysis pseudocode, not buildable source.
 * calls 0082279f FUN_0082279f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00822990(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  float *pfVar5;
  
  puVar1 = param_1;
  iVar4 = 0;
  iVar2 = (**(code **)param_1[0x10])((undefined4 *)param_1[0x10],0x10,DAT_009c23f0,DAT_009c23f4,0);
  if (iVar2 < 1) {
    iVar2 = 0;
    if (0 < DAT_0090bd18) {
      do {
        *(undefined4 *)(param_1[0xd] + iVar2 * 4) = *(undefined4 *)(param_1[0xe] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_0090bd18);
    }
    iVar2 = 0;
    if (DAT_009c2318._1_1_ != 0) {
      do {
        param_1[1] = param_1[7];
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
      } while (iVar2 < (int)(uint)DAT_009c2318._1_1_);
    }
    uVar3 = 0;
  }
  else {
    param_1[0xf] = *(undefined4 *)(DAT_009c23f4 + 0x3c);
    if (0 < DAT_0090bd18) {
      do {
        iVar2 = iVar4 * 4;
        if (*(int *)(iVar2 + DAT_009c2324) != 0) {
          pfVar5 = (float *)(param_1[0xe] + iVar2);
          if (*(float *)(iVar2 + param_1[0xd]) == *pfVar5) {
            if (*pfVar5 != _DAT_00890968) {
              (*DAT_009c2524)(0x10,*pfVar5,DAT_009c23f4,*(undefined4 *)(iVar2 + DAT_009c22f4));
            }
          }
          else {
            FUN_0082279f(*(float *)(iVar2 + param_1[0xd]),*pfVar5,DAT_009c23f4,
                         *(undefined4 *)(iVar2 + DAT_009c22f4));
            *(undefined4 *)(extraout_EDX + param_1[0xd]) =
                 *(undefined4 *)(extraout_EDX + param_1[0xe]);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_0090bd18);
    }
    param_1 = (undefined4 *)0x0;
    if (DAT_009c2318._1_1_ != 0) {
      pfVar5 = (float *)(puVar1 + 7);
      iVar2 = (int)&DAT_009c23f4 - (int)puVar1;
      do {
        if (pfVar5[-6] == *pfVar5) {
          if (*pfVar5 != _DAT_00890968) {
            (*DAT_009c2524)(0x10,*pfVar5,DAT_009c23f4,*(undefined4 *)(iVar2 + (int)pfVar5));
          }
        }
        else {
          FUN_0082279f(pfVar5[-6],*pfVar5,DAT_009c23f4,*(undefined4 *)(iVar2 + (int)pfVar5));
          pfVar5[-6] = *pfVar5;
        }
        param_1 = (undefined4 *)((int)param_1 + 1);
        pfVar5 = pfVar5 + 1;
      } while ((int)param_1 < (int)(uint)DAT_009c2318._1_1_);
    }
    uVar3 = 0x10;
  }
  return uVar3;
}

