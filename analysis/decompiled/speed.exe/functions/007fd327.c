/* speed.exe 007fd327 FUN_007fd327; analysis pseudocode, not buildable source.
 */

void FUN_007fd327(uint param_1,short *param_2,undefined4 *param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bStack00000013;
  
  iVar1 = (uint)(byte)(&DAT_008c47b8)[param_4] * 0x100 + param_1;
  puVar4 = param_3;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = (int)*param_2;
  bStack00000013 = 0;
  if (iVar2 < *(int *)(iVar1 + 0x590)) {
    if (-*(int *)(iVar1 + 0x590) < iVar2) {
      bStack00000013 = 1;
    }
    else {
      *(short *)param_3 =
           (short)((uint)((iVar2 - *(int *)(iVar1 + 0x390)) * *(int *)(iVar1 + 400) + 0xffff) >>
                  0x10);
    }
  }
  else {
    *(short *)param_3 =
         (short)((uint)((*(int *)(iVar1 + 0x390) + iVar2) * *(int *)(iVar1 + 400)) >> 0x10);
  }
  param_1 = 4;
  do {
    param_3 = (undefined4 *)((int)param_3 + 2);
    iVar3 = *(int *)((int)&DAT_008c44b8 + param_1) * 4;
    iVar5 = *(int *)(iVar3 + 0x590 + iVar1) + *(int *)(iVar1 + 0x790 + (uint)bStack00000013 * 4);
    iVar2 = (int)param_2[*(int *)((int)&DAT_008c44b8 + param_1)];
    if (iVar2 < iVar5) {
      if (iVar2 <= -iVar5) {
        *(short *)param_3 =
             (short)((uint)((iVar2 - *(int *)(iVar3 + 0x390 + iVar1)) *
                            *(int *)(iVar3 + 400 + iVar1) + 0xffff) >> 0x10);
        goto LAB_007fd3ea;
      }
      bStack00000013 = bStack00000013 + 1;
    }
    else {
      *(short *)param_3 =
           (short)((uint)((*(int *)(iVar3 + 0x390 + iVar1) + iVar2) * *(int *)(iVar3 + 400 + iVar1))
                  >> 0x10);
LAB_007fd3ea:
      bStack00000013 = 0;
    }
    param_1 = param_1 + 4;
    if (0xff < param_1) {
      return;
    }
  } while( true );
}

