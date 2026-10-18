/* speed.exe 0058cef0 FUN_0058cef0; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 0057d380 FUN_0057d380
 * calls 00508b10 FUN_00508b10
 * calls 005252d0 FUN_005252d0
 * calls 00524920 FUN_00524920
 * calls 005251a0 FUN_005251a0
 * calls 00586290 FUN_00586290
 * calls 00515b90 FUN_00515b90
 * calls 00514c70 FUN_00514c70
 * calls 0056f410 FUN_0056f410
 * calls 00581cb0 FUN_00581cb0
 * calls 00515f20 FUN_00515f20
 */

undefined4 * __thiscall FUN_0058cef0(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 local_16;
  undefined2 uStack_14;
  ushort local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a0ecc;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4 = 0;
  if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xc & 1) == 0) {
    iVar6 = 0;
    piVar2 = &DAT_0091d92c;
    do {
      if (((piVar2[-1] == 0x11) && (*piVar2 == 0)) && (piVar2[1] == 1)) {
        iVar6 = iVar6 + 1;
      }
      piVar2 = piVar2 + 3;
    } while ((int)piVar2 < 0x91dc20);
    if (iVar6 < 1) {
      iVar6 = 4;
      do {
        iVar7 = 0;
        iVar3 = 0;
        do {
          if (*(int *)((int)&DAT_0091d928 + iVar3) == 0) {
            (&DAT_0091d928)[iVar7 * 3] = 0x11;
            (&DAT_0091d92c)[iVar7 * 3] = 0;
            (&DAT_0091d930)[iVar7 * 3] = 1;
            break;
          }
          iVar3 = iVar3 + 0xc;
          iVar7 = iVar7 + 1;
        } while (iVar3 < 0x2f4);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) =
       *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) | 0x1000;
  uVar4 = FUN_00524850(param_1[4],0x2347122a);
  FUN_00514c70(uVar4);
  uVar4 = FUN_0057d380();
  param_1[0x10] = uVar4;
  uVar4 = FUN_005251a0(param_1[4],0x2347122a,uVar4);
  FUN_00515b90(uVar4);
  param_2 = param_1[0x10];
  FUN_00508b10(&param_2,1,&LAB_0057d2f0,param_1,0);
  piVar2 = (int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x414);
  iVar6 = 0;
  piVar5 = piVar2;
  do {
    if (*piVar5 == *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8)) {
      piVar5 = piVar2 + iVar6 * 5;
      goto LAB_0058d05a;
    }
    iVar6 = iVar6 + 1;
    piVar5 = piVar5 + 5;
  } while (iVar6 < 200);
  piVar5 = (int *)0x0;
LAB_0058d05a:
  bVar1 = *(byte *)((int)piVar5 + 0x11);
  if ((0x19 < bVar1) ||
     (piVar5 = piVar2 + (uint)bVar1 * 0xe + 0x21ca, (char)piVar2[(uint)bVar1 * 0xe + 0x21ca] == -1))
  {
    piVar5 = (int *)0x0;
  }
  param_1[0xb] = piVar5;
  FUN_0056f410(*DAT_0091e014);
  iVar6 = FUN_00581cb0();
  FUN_005252d0(param_1[4],0xbd66334a,&DAT_0089c2d0,iVar6);
  uVar8 = CONCAT22(local_12,uStack_14) + CONCAT22(uStack_14,local_16) + CONCAT22(local_16,uStack_18)
          + CONCAT22(uStack_18,local_1a) + CONCAT22(local_1a,uStack_1c) +
          CONCAT22(uStack_1c,uStack_1e) + (uint)local_12 + CONCAT22(uStack_1e,local_20) & 0xffff;
  FUN_005252d0(param_1[4],0xb967f64d,&DAT_0089d764,uVar8);
  iVar3 = FUN_00581cb0();
  FUN_005252d0(param_1[4],0xa4c79522,&DAT_0089c2d0,iVar3 - iVar6);
  iVar6 = param_1[0xb];
  FUN_005252d0(param_1[4],0x5344f2a6,&DAT_0089d764,
               (ushort)(*(short *)(iVar6 + 0x26) + *(short *)(iVar6 + 0x24) +
                        *(short *)(iVar6 + 0x22) + *(short *)(iVar6 + 0x20) +
                        *(short *)(iVar6 + 0x1e) + *(short *)(iVar6 + 0x1c) +
                        *(short *)(iVar6 + 0x1a) + *(short *)(iVar6 + 0x18)) - uVar8);
  iVar6 = 0;
  piVar2 = &DAT_0091d92c;
  do {
    if (((piVar2[-1] == 0x11) && (*piVar2 == 0)) && (piVar2[1] == 1)) {
      iVar6 = iVar6 + 1;
    }
    piVar2 = piVar2 + 3;
  } while ((int)piVar2 < 0x91dc20);
  *(bool *)(param_1 + 0xf) = 0 < iVar6;
  iVar6 = 0;
  piVar2 = &DAT_0091d92c;
  do {
    if (((piVar2[-1] == 0x11) && (*piVar2 == 0)) && (piVar2[1] == 1)) {
      iVar6 = iVar6 + 1;
    }
    piVar2 = piVar2 + 3;
  } while ((int)piVar2 < 0x91dc20);
  FUN_005252d0(param_1[4],0x5b875870,&DAT_0089d764,iVar6);
  iVar6 = 0;
  piVar2 = &DAT_0091d92c;
  do {
    if (((piVar2[-1] == 0x11) && (*piVar2 == 0)) && (piVar2[1] == 1)) {
      iVar6 = iVar6 + 1;
    }
    piVar2 = piVar2 + 3;
  } while ((int)piVar2 < 0x91dc20);
  FUN_005252d0(param_1[4],0xea8aecd9,&DAT_0089d764,iVar6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_00524920(param_1[4],0xf9363f30,0x163c76,1);
    FUN_00524920(param_1[4],0x6b6973c1,0x163c76,1);
    FUN_00524920(param_1[4],0x39f11e5c,0x163c76,1);
    FUN_00515f20(param_1[4],0xb8a7c6cc,0);
  }
  else {
    FUN_00524920(param_1[4],0x39f11e5c,0x6ebbfb68,1);
  }
  uVar4 = FUN_00581cb0();
  param_1[0xd] = uVar4;
  FUN_005252d0(param_1[4],0x854af1f4,&DAT_0089c2d0,uVar4);
  uVar4 = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4);
  param_1[0xe] = uVar4;
  FUN_005252d0(param_1[4],0x1930b057,&DAT_0089c2d0,uVar4);
  ExceptionList = local_c;
  return param_1;
}

