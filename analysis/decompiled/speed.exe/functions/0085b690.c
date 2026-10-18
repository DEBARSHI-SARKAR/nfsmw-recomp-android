/* speed.exe 0085b690 FUN_0085b690; analysis pseudocode, not buildable source.
 * calls 0085b5d0 FUN_0085b5d0
 * calls 007d6cb0 __security_check_cookie
 * calls 0085b440 FUN_0085b440
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUN_0085b690(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined2 uStack_612;
  undefined4 local_610 [128];
  undefined1 local_410 [512];
  undefined1 local_210 [516];
  undefined4 local_c;
  
  local_c = DAT_00906980;
  iVar1 = FUN_0085b5d0(param_4);
  FUN_0085b5d0(param_3);
  uVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      uVar3 = uVar3 << 8 | (uint)*(byte *)(iVar2 + param_6);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
    if (uVar3 == 3) {
      FUN_0085b440(local_610,iVar1,local_210,local_210,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_210,local_410);
      goto LAB_0085ba1b;
    }
    if (uVar3 == 0x11) {
      FUN_0085b440(local_610,iVar1,local_210,local_210,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_210,local_410);
      goto LAB_0085ba1b;
    }
    if (uVar3 == 0x10001) {
      FUN_0085b440(local_610,iVar1,local_210,local_210,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_610,local_410);
      FUN_0085b440(local_610,iVar1,local_610,local_210,local_410);
      goto LAB_0085ba1b;
    }
  }
  puVar5 = local_610;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  (&uStack_612)[iVar1] = 1;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      FUN_0085b440(local_610,iVar1,local_610,local_210,local_410);
    }
    FUN_0085b440(local_210,iVar1,local_210,local_210,local_410);
  }
LAB_0085ba1b:
  param_5 = param_5 / 2;
  puVar4 = (undefined1 *)((int)local_610 + (iVar1 - param_5) * 2);
  if (0 < param_5) {
    do {
      *param_2 = puVar4[1];
      param_2[1] = *puVar4;
      param_2 = param_2 + 2;
      puVar4 = puVar4 + 2;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

