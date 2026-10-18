/* speed.exe 0083e650 FUN_0083e650; analysis pseudocode, not buildable source.
 * calls 0084caf0 FUN_0084caf0
 * calls 0084ca30 FUN_0084ca30
 * calls 0084df40 FUN_0084df40
 * calls 0084d1b0 FUN_0084d1b0
 * calls 0084eb20 FUN_0084eb20
 * calls 0084fad0 FUN_0084fad0
 * calls 00851720 FUN_00851720
 */

int FUN_0083e650(int param_1,uint param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (((param_2 & 3) == 0) || ((param_2 & 0xf00) == 0)) {
    return -1;
  }
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2[(param_1 + 0x24) - (int)param_3] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  piVar5 = (int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xc4) = param_2 & 0xfffffffc;
  *(uint *)(param_1 + 0xac) = param_2 >> 1 & 1;
  iVar4 = 4;
  piVar6 = piVar5;
  do {
    iVar7 = *piVar6;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(iVar7);
    }
    *piVar6 = 0;
    piVar6[1] = 0;
    piVar6 = piVar6 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((param_2 & 3) == 3) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      uVar3 = FUN_0084d1b0(8);
      *(undefined4 *)(param_1 + 0xa8) = uVar3;
      FUN_0084ca30(uVar3);
    }
    FUN_0084caf0(*(undefined4 *)(param_1 + 0xa8),"GmUtil",param_3,&DAT_00890978,
                 "TCP:~1:1024\tUDP:~1:1024",0);
    iVar4 = 0;
  }
  else {
    if ((param_2 & 0x100) != 0) {
      iVar4 = FUN_00851720(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xcc));
      *piVar5 = iVar4;
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    if ((param_2 & 0x400) != 0) {
      uVar3 = FUN_0084fad0(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xcc));
      *(undefined4 *)(param_1 + 0xe4) = uVar3;
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
    if ((param_2 & 0x200) != 0) {
      uVar3 = FUN_0084eb20(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xcc));
      *(undefined4 *)(param_1 + 0xf0) = uVar3;
      if ((*piVar5 == 0) && (*(int *)(param_1 + 0xe4) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 5000;
      }
      *(undefined4 *)(param_1 + 0xf8) = uVar3;
    }
    if ((param_2 & 0x800) != 0) {
      uVar3 = FUN_0084df40(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xcc));
      *(undefined4 *)(param_1 + 0xfc) = uVar3;
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    iVar7 = 0;
    iVar4 = 0;
    while (-1 < iVar4) {
      if (*piVar5 != 0) {
        if ((param_2 & 2) == 0) {
          if ((param_2 & 1) != 0) {
            iVar4 = (**(code **)(*piVar5 + 0x10))(*piVar5,param_3);
          }
        }
        else {
          iVar4 = (**(code **)(*piVar5 + 0x18))(*piVar5,param_3);
        }
      }
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 3;
      if (3 < iVar7) {
        return iVar4;
      }
    }
  }
  return iVar4;
}

