/* speed.exe 00807b55 FUN_00807b55; analysis pseudocode, not buildable source.
 * calls 00807239 FUN_00807239
 * calls 0080727c FUN_0080727c
 * calls 00807371 FUN_00807371
 * calls 008075aa FUN_008075aa
 */

void FUN_00807b55(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  short *psVar8;
  int local_c;
  int local_8;
  
  iVar6 = param_3;
  iVar5 = param_1;
  FUN_008075aa(param_1,param_2,param_3,1,&param_1);
  iVar2 = FUN_0080727c(iVar5,*(int *)(iVar5 + 0x3a0),param_1);
  *(int *)(iVar5 + 0x3a0) = iVar2;
  *(char *)(*(int *)(iVar5 + 0x230) * param_2 + *(int *)(iVar5 + 0x6f4) + iVar6) = (char)iVar2;
  *(int *)(iVar5 + 8) = iVar2;
  if (iVar2 == 7) {
    uVar3 = FUN_00807239(iVar5);
    *(undefined4 *)(iVar5 + 0xc) = uVar3;
    uVar3 = FUN_00807239(iVar5);
    *(undefined4 *)(iVar5 + 0x10) = uVar3;
    uVar3 = FUN_00807239(iVar5);
    *(undefined4 *)(iVar5 + 0x14) = uVar3;
    uVar3 = FUN_00807239(iVar5);
    iVar6 = 0;
    *(undefined4 *)(iVar5 + 0x1c) = 7;
    *(undefined4 *)(iVar5 + 0x20) = 7;
    *(undefined4 *)(iVar5 + 0x18) = uVar3;
    local_8 = 0;
    psVar8 = (short *)(iVar5 + 0x24);
    local_c = 4;
    do {
      iVar2 = *(int *)(psVar8 + -0xc);
      if (iVar2 == 0) {
        *psVar8 = 0;
        psVar8[1] = 0;
      }
      else {
        if (iVar2 == 3) {
          *psVar8 = *(short *)(iVar5 + 0x3c);
          psVar8[1] = *(short *)(iVar5 + 0x3e);
          iVar6 = iVar6 + *(short *)(iVar5 + 0x3c);
          iVar2 = (int)*(short *)(iVar5 + 0x3e);
        }
        else if (iVar2 == 4) {
          *psVar8 = *(short *)(iVar5 + 0x40);
          psVar8[1] = *(short *)(iVar5 + 0x42);
          iVar6 = iVar6 + *(short *)(iVar5 + 0x40);
          iVar2 = (int)*(short *)(iVar5 + 0x42);
        }
        else {
          if (iVar2 != 2) goto LAB_00807c67;
          FUN_00807371(iVar5,&param_1,2);
          *psVar8 = (short)param_1;
          iVar6 = iVar6 + (short)param_1;
          psVar8[1] = param_1._2_2_;
          iVar2 = (int)param_1._2_2_;
        }
        local_8 = local_8 + iVar2;
      }
LAB_00807c67:
      psVar8 = psVar8 + 2;
      local_c = local_c + -1;
      if (local_c == 0) {
        *(undefined2 *)(*(int *)(iVar5 + 0x6f8) + (*(int *)(iVar5 + 0x230) * param_2 + param_3) * 4)
             = *(undefined2 *)(iVar5 + 0x30);
        *(undefined2 *)
         (*(int *)(iVar5 + 0x6f8) + 2 + (*(int *)(iVar5 + 0x230) * param_2 + param_3) * 4) =
             *(undefined2 *)(iVar5 + 0x32);
        uVar1 = (undefined2)((int)((-1 < iVar6) + 1 + iVar6) >> 2);
        *(undefined2 *)(iVar5 + 0x34) = uVar1;
        uVar4 = (undefined2)((int)((-1 < local_8) + 1 + local_8) >> 2);
        *(undefined2 *)(iVar5 + 0x36) = uVar4;
        *(undefined2 *)(iVar5 + 0x38) = uVar1;
        *(undefined2 *)(iVar5 + 0x3a) = uVar4;
        return;
      }
    } while( true );
  }
  if (iVar2 == 2) {
    FUN_00807371(iVar5,&param_1,2);
  }
  else {
    if (iVar2 == 3) {
      param_1._0_2_ = *(undefined2 *)(iVar5 + 0x3c);
      param_1._2_2_ = *(undefined2 *)(iVar5 + 0x3e);
      goto LAB_00807d78;
    }
    if (iVar2 == 4) {
      param_1._0_2_ = *(undefined2 *)(iVar5 + 0x40);
      param_1._2_2_ = *(undefined2 *)(iVar5 + 0x42);
      goto LAB_00807d78;
    }
    if (iVar2 != 6) {
      if (iVar2 == 8) {
        FUN_008075aa(iVar5,param_2,iVar6,2,&param_1);
        param_1._0_2_ = *(undefined2 *)(iVar5 + 0x48);
        param_1._2_2_ = *(undefined2 *)(iVar5 + 0x4a);
      }
      else if (iVar2 == 9) {
        FUN_008075aa(iVar5,param_2,iVar6,2,&param_1);
        param_1._0_2_ = *(undefined2 *)(iVar5 + 0x4c);
        param_1._2_2_ = *(undefined2 *)(iVar5 + 0x4e);
      }
      else {
        param_1._0_2_ = 0;
        param_1._2_2_ = 0;
      }
      goto LAB_00807d78;
    }
    FUN_008075aa(iVar5,param_2,iVar6,2,&param_1);
    FUN_00807371(iVar5,&param_1,6);
  }
LAB_00807d78:
  *(undefined2 *)(*(int *)(iVar5 + 0x6f8) + (*(int *)(iVar5 + 0x230) * param_2 + param_3) * 4) =
       (undefined2)param_1;
  *(short *)(*(int *)(iVar5 + 0x6f8) + 2 + (*(int *)(iVar5 + 0x230) * param_2 + param_3) * 4) =
       param_1._2_2_;
  puVar7 = (undefined2 *)(iVar5 + 0x26);
  iVar5 = 6;
  do {
    puVar7[-1] = (undefined2)param_1;
    *puVar7 = param_1._2_2_;
    *(int *)(puVar7 + -0xd) = iVar2;
    puVar7 = puVar7 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

