/* speed.exe 00750610 FUN_00750610; analysis pseudocode, not buildable source.
 * calls 004669b0 FUN_004669b0
 * calls 007321f0 FUN_007321f0
 * calls 00466340 FUN_00466340
 * calls 004669e0 FUN_004669e0
 * calls 007445c0 FUN_007445c0
 * calls 00737440 FUN_00737440
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00750610(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined1 local_20 [4];
  float local_1c;
  
  if ((*(int *)(param_1 + 0x88) != 0) && (*(char *)(param_1 + 0x158) == '\0')) {
    local_78 = 0;
    do {
      cVar2 = (&DAT_008b2c40)[local_78 * 0x14];
      if (cVar2 == -1) {
        iVar1 = param_1 + 0x15c + local_78 * 8;
        switch(local_78) {
        case 0:
          piVar5 = (int *)FUN_00466340(DAT_009b0950);
          if (piVar5 == (int *)0x0) {
LAB_007508b4:
            piVar5 = (int *)0x0;
          }
          else {
            piVar5[4] = 0;
            piVar5[1] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
          }
          break;
        case 1:
          FUN_004669e0(&local_70,param_2 + 4);
          FUN_004669b0(0x3f000000);
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(local_70,local_6c,local_68);
          break;
        case 2:
          FUN_004669e0(&local_60,param_2 + 0xc);
          FUN_004669b0(0x3f000000);
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(local_60,local_5c,local_58);
          break;
        case 3:
          FUN_004669e0(&local_50,param_2 + 0xc);
          FUN_004669b0(0x3f000000);
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(local_50,local_4c,local_48);
          break;
        case 4:
          FUN_004669e0(&local_40,param_2 + 8);
          FUN_004669b0(0x3f000000);
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(local_40,local_3c,local_38);
          break;
        case 5:
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(*param_2,param_2[1],param_2[2]);
          break;
        case 6:
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(param_2[4],param_2[5],param_2[6]);
          break;
        case 7:
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(param_2[8],param_2[9],param_2[10]);
          break;
        case 8:
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) goto LAB_007508b4;
          piVar5 = (int *)FUN_00737440(param_2[0xc],param_2[0xd],param_2[0xe]);
          break;
        case 9:
          FUN_004669e0(&local_30,param_2 + 4);
          FUN_004669b0(0x3f000000);
          FUN_007321f0(local_20,param_2,param_2 + 4);
          iVar4 = FUN_00466340(DAT_009b0950);
          if (iVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = (int *)FUN_00737440(local_30,local_2c,local_1c * _DAT_00895074 + local_28);
          }
          break;
        default:
          goto switchD_00750698_default;
        }
        puVar3 = *(undefined4 **)(iVar1 + 4);
        *(int **)(iVar1 + 4) = piVar5;
        *puVar3 = piVar5;
        *piVar5 = iVar1;
      }
      else if (cVar2 != '\0') {
        FUN_007445c0(param_1 + 0x15c + local_78 * 8,&DAT_008b2c30 + local_78 * 0x14,cVar2);
      }
switchD_00750698_default:
      local_78 = local_78 + 1;
    } while (local_78 < 0x1c);
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  return;
}

