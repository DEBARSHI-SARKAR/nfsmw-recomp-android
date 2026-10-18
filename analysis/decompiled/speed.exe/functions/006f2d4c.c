/* speed.exe 006f2d4c FUN_006f2d4c; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006f2d4c(int *param_1)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 in_stack_00000010;
  undefined1 *puStack00000014;
  int in_stack_00000018;
  float in_stack_00000034;
  float in_stack_00000038;
  float in_stack_0000003c;
  int in_stack_00000040;
  int in_stack_00000048;
  int *in_stack_0000004c;
  int in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_0000005c;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 *in_stack_00000074;
  uint in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined1 *in_stack_00000084;
  undefined4 *in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  undefined1 *in_stack_00000094;
  undefined4 in_stack_00000098;
  int in_stack_000000b8;
  void *in_stack_000000c4;
  undefined4 in_stack_000000cc;
  undefined4 uVar8;
  undefined4 uVar9;
  
code_r0x006f2d4c:
  piVar6 = (int *)(*(code *)param_1[1])(unaff_ESI,0xa6b47fac,&stack0x0000006c);
  do {
    piVar1 = in_stack_0000004c;
    (**(code **)(*piVar6 + 0xc))(in_stack_0000004c);
    piVar6 = (int *)FUN_005d59f0(&LAB_00402840);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(in_stack_00000018);
    }
    if (in_stack_00000010._3_1_ != '\0') {
      (**(code **)(*piVar1 + 0x30))((int)*(char *)(DAT_0091cf90 + 0xc));
      (**(code **)(*piVar1 + 0x18))(0);
      (**(code **)(*piVar1 + 0x28))(1);
    }
    in_stack_000000cc = 0xffffffff;
    FUN_0045a430();
    iVar7 = in_stack_00000040;
    do {
      do {
        iVar7 = iVar7 + 1;
        if (3 < iVar7) {
          DAT_009b9e64 = 0;
          ExceptionList = in_stack_000000c4;
          return;
        }
        in_stack_00000040 = iVar7;
        in_stack_00000018 = FUN_00735ad0(iVar7);
      } while (in_stack_00000018 == 0);
      in_stack_00000010._3_1_ = in_stack_00000018 == DAT_009b0fa4;
      pcVar3 = "OnlineLocalPlayer";
      if (!(bool)in_stack_00000010._3_1_) {
        pcVar3 = "OnlineRemotePlayer";
      }
      iVar4 = FUN_005cc240(pcVar3);
      for (piVar6 = DAT_00988ec4; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[2]) {
        if (*piVar6 == iVar4) {
          (*(code *)piVar6[1])(0,0,0);
          break;
        }
      }
      in_stack_0000004c = (int *)FUN_005d59f0(&LAB_006200d0);
    } while (in_stack_0000004c == (int *)0x0);
    uVar9 = 0;
    uVar8 = 0;
    in_stack_0000005c =
         (float)(int)*(char *)(in_stack_00000018 + 0x1148) * _DAT_008959e4 - _DAT_00891048;
    in_stack_00000054 = in_stack_0000005c + in_stack_00000034;
    in_stack_0000005c = in_stack_0000005c * _DAT_00890968;
    in_stack_00000058 = in_stack_00000038 + in_stack_0000005c;
    in_stack_0000005c = in_stack_0000005c + in_stack_0000003c;
    uVar5 = FUN_00455fd0(0x4a97ec8f,*(undefined4 *)(in_stack_00000018 + 0xfa4),0,0);
    FUN_00452380(uVar5,uVar8,uVar9);
    in_stack_000000cc = 1;
    if (in_stack_000000b8 == 0) {
      in_stack_000000b8 = FUN_006269b0(0x50);
    }
    uVar5 = 2;
    in_stack_000000cc = 2;
    if (*(char *)(in_stack_00000018 + 0xfa8) == '\0') {
      in_stack_00000048 = 0;
    }
    else {
      in_stack_00000048 = in_stack_00000018 + 0xfac;
    }
    if (*(char *)(DAT_0091cf90 + 0x142) == '\0') {
      uVar5 = 6;
    }
    else if (*(char *)(DAT_0091cf90 + 0x15f) != '\0') {
      uVar5 = 0x12;
    }
    puStack00000014 = (undefined1 *)0x0;
    if ((*(char *)(DAT_0091cf90 + 0x15f) != '\0') &&
       (cVar2 = FUN_0067c310(&stack0x000000b0,&stack0x00000028), cVar2 != '\0')) {
      puStack00000014 = &stack0x00000028;
    }
    uVar8 = *(undefined4 *)(in_stack_00000018 + 0xfa4);
    iVar7 = in_stack_00000050 + 0x58;
    FUN_004040f0(&stack0x0000006c);
    unaff_ESI = in_stack_0000006c;
    in_stack_00000074 = &stack0x0000006c;
    in_stack_00000084 = &stack0x00000060;
    in_stack_00000088 = &stack0x00000054;
    in_stack_00000070 = 0xa6b47fac;
    in_stack_0000008c = in_stack_00000048;
    in_stack_00000094 = puStack00000014;
    in_stack_0000007c = (byte)in_stack_00000010._3_1_ - 1 & 6;
    in_stack_00000080 = uVar8;
    in_stack_00000090 = iVar7;
    in_stack_00000098 = uVar5;
    iVar7 = FUN_005cc240("PVehicle");
    for (param_1 = DAT_0092c66c; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
      if (*param_1 == iVar7) goto code_r0x006f2d4c;
    }
    piVar6 = (int *)0x0;
  } while( true );
}

