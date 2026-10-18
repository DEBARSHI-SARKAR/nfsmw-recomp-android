/* speed.exe 006c0f80 FUN_006c0f80; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_006c0f80(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  uint uVar5;
  
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  uVar1 = param_1[3];
  uVar5 = *param_2 << 2;
  if ((uVar1 < (uint)(*param_2 << 2)) && (uVar5 = uVar1, param_1[4] != 0)) {
    *(undefined1 *)((int)param_1 + 0x25) = 1;
  }
  piVar2 = (int *)*param_1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[5] = uVar5;
  param_1[6] = 0;
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    param_1[4] = 0;
    param_2 = (int *)0x0;
    iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,0,param_1[8] * uVar5,&param_2,0x2800);
    iVar4 = unaff_EBP;
    if (iVar3 == 0) {
      param_1[6] = param_1[4];
      param_1[4] = param_1[4] + uVar5;
      *(undefined1 *)(param_1 + 9) = 1;
      param_1[10] = unaff_EBP;
      param_1[0xc] = unaff_EBP;
      param_1[0xb] = unaff_EBP + uVar5 * 0x18;
      return unaff_EBP;
    }
  }
  return iVar4;
}

