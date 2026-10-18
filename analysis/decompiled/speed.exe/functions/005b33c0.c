/* speed.exe 005b33c0 FUN_005b33c0; analysis pseudocode, not buildable source.
 * calls 005b2f10 FUN_005b2f10
 */

void FUN_005b33c0(ushort param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 local_10 [16];
  
  if (*param_5 == 0) {
    *param_5 = 0xffffc100;
  }
  uVar3 = param_1 & 0xff;
  uVar1 = (uint)(short)(param_1 & 0xff01);
  if (-0x7900 < (int)uVar1) {
    if ((int)uVar1 < -0x3dff) {
      if (uVar1 != 0xffffc200) {
        if (uVar1 == 0xffff8800) {
          *param_3 = 0;
          param_3[2] = 0;
          param_3[1] = (int)(short)uVar3;
          goto LAB_005b34d1;
        }
        if (uVar1 == 0xffff8900) {
          param_3[1] = 0;
          param_3[2] = 0;
          *param_3 = (int)(short)uVar3;
          goto LAB_005b34d1;
        }
        if (uVar1 != 0xffffc100) goto LAB_005b34d1;
      }
    }
    else if ((uVar1 != 0xffffc300) && (uVar1 != 0xffffc400)) goto LAB_005b34d1;
    *param_5 = uVar1;
    goto LAB_005b34d1;
  }
  if (uVar1 == 0xffff8700) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    if (-0x7c00 < (int)uVar1) {
      if (uVar1 == 0xffff8500) {
        iVar2 = (int)(short)uVar3;
        *param_3 = iVar2;
        param_3[1] = iVar2;
        param_3[2] = iVar2;
      }
      else if (uVar1 == 0xffff8600) {
        iVar2 = (int)(short)uVar3;
        param_3[3] = iVar2;
        *param_3 = iVar2;
        param_3[1] = iVar2;
        param_3[2] = iVar2;
      }
      goto LAB_005b34d1;
    }
    if (uVar1 == 0xffff8400) {
      param_3[3] = (int)(short)uVar3;
      goto LAB_005b34d1;
    }
    if (uVar1 != 0xffff8100) {
      if (uVar1 == 0xffff8200) {
        param_3[1] = (int)(short)uVar3;
      }
      else if (uVar1 == 0xffff8300) {
        *param_3 = (int)(short)uVar3;
      }
      goto LAB_005b34d1;
    }
  }
  param_3[2] = (int)(short)uVar3;
LAB_005b34d1:
  uVar1 = *param_5;
  if (0xffffc300 < uVar1) {
    if (uVar1 == 0xffffc400) {
      param_2[3] = param_4[3];
      param_2[2] = param_4[2];
      param_2[1] = param_4[1];
      *param_2 = *param_4;
      param_2[2] = param_2[2] + param_3[2];
      param_2[1] = param_2[1] + param_3[1];
      *param_2 = *param_2 + *param_3;
      param_2[3] = param_2[3] + param_3[3];
    }
    return;
  }
  if (uVar1 != 0xffffc300) {
    if (uVar1 != 0xffffc100) {
      if (uVar1 != 0xffffc200) {
        return;
      }
      param_2[3] = param_3[3];
      param_2[2] = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = *param_3;
      param_2[3] = param_4[3];
      return;
    }
    param_3 = (int *)FUN_005b2f10(local_10,param_3);
  }
  param_2[3] = param_3[3];
  param_2[2] = param_3[2];
  param_2[1] = param_3[1];
  *param_2 = *param_3;
  return;
}

