/* speed.exe 005625cd FUN_005625cd; analysis pseudocode, not buildable source.
 * calls 00558910 FUN_00558910
 * calls 00524920 FUN_00524920
 * calls 00514530 FUN_00514530
 * calls 00541f70 FUN_00541f70
 * calls 00560220 FUN_00560220
 * calls 00589870 FUN_00589870
 * calls 00589900 FUN_00589900
 * calls 005145d0 FUN_005145d0
 * calls 00516c90 FUN_00516c90
 * calls 00541ab0 FUN_00541ab0
 * calls 005603a0 FUN_005603a0
 * calls 005602f0 FUN_005602f0
 * calls 00542070 FUN_00542070
 * calls 005257f0 FUN_005257f0
 * calls 00525220 FUN_00525220
 * calls 00525940 FUN_00525940
 * calls 00799f50 FUN_00799f50
 * calls 00460c70 FUN_00460c70
 * calls 00796d30 FUN_00796d30
 * calls 00524850 FUN_00524850
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00541c30 FUN_00541c30
 * calls 00799c10 FUN_00799c10
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 007935b0 FUN_007935b0
 * calls 005584d0 FUN_005584d0
 */

void __thiscall FUN_005625cd(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  bool in_ZF;
  uint in_stack_00000028;
  int in_stack_0000002c;
  
  if (!in_ZF) {
    return;
  }
  cVar2 = (char)unaff_EBX;
  if (DAT_0091ca88 != cVar2) {
    return;
  }
  if (0x9120409e < in_stack_00000028) {
    if (in_stack_00000028 < 0xc519bfc5) {
      if (in_stack_00000028 == 0xc519bfc4) {
        FUN_00541f70(*(undefined4 *)(param_1 + 0x40));
        FUN_00515e20(&stack0x00000004,0x20,"POS%d",*(int *)(param_1 + 0x40) + 1);
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = FUN_005af1c0(&stack0x00000004,1);
        FUN_00524920(uVar1,0x9321399c,uVar4);
        FUN_00542070();
        return;
      }
      if (in_stack_00000028 == 0x9803f6e2) {
        FUN_00589900();
        if (*(int *)(param_1 + 0x2dc) != 0x2711) {
          FUN_005602f0(*(int *)(param_1 + 0x2dc));
        }
        FUN_00589900();
        if (*(int *)(param_1 + 0x338) == 0x2711) {
          return;
        }
        FUN_005603a0(*(int *)(param_1 + 0x338));
        return;
      }
      if (in_stack_00000028 == 0xb5971bf1) {
        FUN_005603a0(1);
        return;
      }
      if (in_stack_00000028 != 0xc519bfc3) {
        return;
      }
      FUN_00541ab0(1,10);
      if (*(int *)(param_1 + 0x354) == unaff_EBX) {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x1450dd,0xb90429ea);
        *(undefined4 *)(param_1 + 0x354) = 1;
      }
      else if (*(int *)(param_1 + 0x354) - unaff_EBX == 1) {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x1450dd,0xe9a7da00);
        *(int *)(param_1 + 0x354) = unaff_EBX;
        *(char *)(param_1 + 0x270) = cVar2;
        FUN_00560220();
        return;
      }
      *(char *)(param_1 + 0x270) = cVar2;
      FUN_00560220();
      return;
    }
    if (in_stack_00000028 != 0xd9feec59) {
      if (in_stack_00000028 == 0xe1fde1d1) {
        DAT_0091ca86 = 1;
        FUN_00525940("OL_MAIN.fng",unaff_EBX,unaff_EBX,unaff_EBX);
        return;
      }
      if (in_stack_00000028 != 0xf1943ca3) {
        return;
      }
      FUN_00541ab0(1,10);
      FUN_00558910(unaff_EBX);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x35c) = unaff_EBX;
    *(int *)(param_1 + 0x30) = iVar3;
    if (2 < iVar3) {
      *(int *)(param_1 + 0x30) = unaff_EBX;
    }
LAB_00562a0d:
    *(char *)(param_1 + 0x270) = cVar2;
    FUN_005145d0();
    FUN_00560220();
    return;
  }
  if (in_stack_00000028 == 0x9120409e) {
    FUN_005603a0(0xffffffff);
    return;
  }
  if (in_stack_00000028 < 0x72619779) {
    if (in_stack_00000028 == 0x72619778) {
      FUN_005602f0(0xffffffff);
      return;
    }
    if (0x5073ef13 < in_stack_00000028) {
      if (in_stack_00000028 != 0x6b7baa6f) {
        return;
      }
      if (*(int *)(param_1 + 0x34c) != unaff_EBX) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        uVar4 = FUN_0056bc10(0x6cf6e689);
        FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar4);
        return;
      }
      param_1 = param_1 + 0x48;
      iVar3 = unaff_EBX;
      FUN_00796d30(param_1);
      FUN_00799c10(param_1,unaff_EBX,iVar3);
      FUN_00560220();
      return;
    }
    if (in_stack_00000028 == 0x5073ef13) {
      iVar3 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x35c) = unaff_EBX;
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x30) = 2;
      }
      goto LAB_00562a0d;
    }
    if (in_stack_00000028 != 0xca4ce1) {
      if (in_stack_00000028 != 0x406415e3) {
        return;
      }
      FUN_00799f50();
      iVar3 = FUN_007935b0(*(undefined4 *)(param_1 + 0x38),unaff_EBX,*(int *)(param_1 + 0x340) + -1)
      ;
      FUN_00460c70(s_PlraQlraRlraSlraotherplayer_008f3300 + 0x10,iVar3 + 0xc);
      DAT_0091ca87 = 1;
      FUN_005257f0("OL_Rankings_Personal.fng",unaff_EBX,unaff_EBX,unaff_EBX);
      return;
    }
  }
  else {
    if (in_stack_00000028 == 0x7eabca56) {
      cVar2 = FUN_00514530(*(undefined4 *)(in_stack_0000002c + 0x10),&stack0x00000028,
                           &stack0x0000002c);
      if (cVar2 == '\0') {
        return;
      }
      *(uint *)(param_1 + 0x40) = in_stack_00000028;
      if ((int)in_stack_00000028 < 2) {
        if (unaff_EBX < *(int *)(param_1 + 0x350)) {
          *(int *)(param_1 + 0x3c) = unaff_EBX;
        }
        *(uint *)(param_1 + 0x350) = in_stack_00000028;
      }
      else {
        *(uint *)(param_1 + 0x350) = *(int *)(param_1 + 0x3c) + in_stack_00000028;
      }
      if (in_stack_0000002c == unaff_EBX) {
        FUN_00542070();
      }
      else {
        iVar3 = *(int *)(param_1 + 0x33c) + -1 + in_stack_0000002c;
        *(int *)(param_1 + 0x340) = iVar3;
        if (*(int *)(param_1 + 0x348) < iVar3) {
          *(int *)(param_1 + 0x340) = *(int *)(param_1 + 0x348);
        }
      }
      FUN_00541f70(*(undefined4 *)(param_1 + 0x40));
      FUN_00541c30();
      FUN_005584d0();
      FUN_00589870(5,9,*(int *)(param_1 + 0x3c) + 1,*(int *)(param_1 + 0x350) + -2);
      return;
    }
    if (in_stack_00000028 != 0x911ab364) {
      if (in_stack_00000028 != 0x911c0a4b) {
        return;
      }
      FUN_005602f0(1);
      return;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_00524850(uVar1,0xf015108a);
  FUN_00516c90(0x587c018b,uVar1,uVar4);
  return;
}

