/* speed.exe 007a71a0 FUN_007a71a0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 007a5750 FUN_007a5750
 * calls 007a5770 FUN_007a5770
 */

int FUN_007a71a0(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 0) {
    switch(param_1) {
    case 0:
      return -0x1a3efdf4;
    case 1:
      return -0x6d824b03;
    case 2:
      return -0x736947ad;
    case 3:
      return 0x2f525e4f;
    case 4:
      return -0x18b21245;
    case 5:
      return (-(uint)(param_4 != '\0') & 0xe2cd7de1) + 0x704a6d50;
    case 6:
      return -0x65f10707;
    }
  }
  else {
    switch(param_1) {
    case 0:
      iVar2 = FUN_00573140("PD_TIRES_%d_%d",param_2,param_3);
      return iVar2;
    case 1:
      iVar2 = FUN_00573140("PD_BRAKES_%d_%d",param_2,param_3);
      return iVar2;
    case 2:
      iVar2 = FUN_00573140("PD_CHASSIS_%d_%d",param_2,param_3);
      return iVar2;
    case 3:
      iVar2 = FUN_00573140("PD_TRANSMISSION_%d_%d",param_2,param_3);
      return iVar2;
    case 4:
      cVar1 = FUN_007a5750();
      if (((cVar1 != '\0') && (param_2 == 4)) && (param_3 == 3)) {
        iVar2 = FUN_00573140("PD_ENGINE_%d_%d_CASTROL",4,3);
        return iVar2;
      }
      cVar1 = FUN_007a5770();
      if (((cVar1 != '\0') && ((param_2 == 2 || (param_2 == 4)))) && (param_3 == 1)) {
        iVar2 = FUN_00573140("PD_ENGINE_%d_%d_ROTARY",param_2,1);
        return iVar2;
      }
      iVar2 = FUN_00573140("PD_ENGINE_%d_%d",param_2,param_3);
      return iVar2;
    case 5:
      if (param_4 == '\0') {
        iVar2 = FUN_00573140("PD_SUPERCHARGER_%d_%d",param_2,param_3);
        return iVar2;
      }
      iVar2 = FUN_00573140("PD_TURBO_%d_%d",param_2,param_3);
      return iVar2;
    case 6:
      iVar2 = FUN_00573140("PD_NITROUS_%d_%d",param_2,param_3);
      return iVar2;
    }
  }
  return 0;
}

