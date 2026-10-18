/* speed.exe 0084e1c0 FUN_0084e1c0; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084af40 FUN_0084af40
 * calls 0084b350 FUN_0084b350
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b0b0 FUN_0084b0b0
 * calls 0084b110 FUN_0084b110
 * calls 0084b560 FUN_0084b560
 * calls 0084e090 FUN_0084e090
 * calls 0084b1e0 FUN_0084b1e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall FUN_0084e1c0(int param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_1c = 0;
  if ((*(int *)(param_1 + 0x94) == 2) &&
     (iVar1 = FUN_0084b350(*(undefined4 *)(param_1 + 0x80),0x73746174,0,0), 0 < iVar1)) {
    *(undefined4 *)(param_1 + 0x94) = 4;
    FUN_0084e090();
  }
  if (*(int *)(param_1 + 0x94) == 3) {
    local_18 = 0x10;
    iVar1 = FUN_0084b0b0(*(undefined4 *)(param_1 + 0x80),local_14,&local_18);
    if (iVar1 != 0) {
      FUN_0084af40(*(undefined4 *)(param_1 + 0x80));
      *(int *)(param_1 + 0x80) = iVar1;
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_0084b560(iVar1,2,100,param_1,FUN_0084e570);
      *(undefined4 *)(param_1 + 0x94) = 4;
      FUN_0084e090();
    }
  }
  iVar1 = *(int *)(param_1 + 0x94);
  while( true ) {
    if ((iVar1 != 4) ||
       ((*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xa8)) % *(int *)(param_1 + 0xa4) ==
        *(int *)(param_1 + 0xac))) goto LAB_0084e3ab;
    pDVar4 = (DWORD *)(*(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xa8));
    iVar1 = *(int *)(param_1 + 0x9c);
    iVar2 = 2;
    if (1 < iVar1) {
      iVar2 = (short)pDVar4[1] + 2;
    }
    iVar1 = FUN_0084b1e0(*(undefined4 *)(param_1 + 0x80),iVar1 + 4 + (int)pDVar4,iVar2 - iVar1,0,0,0
                        );
    if (iVar1 == 0) goto LAB_0084e3ab;
    if (iVar1 < 0) break;
    DVar3 = GetTickCount();
    *(DWORD *)(param_1 + 0xd8) = DVar3;
    if (*(int *)(param_1 + 0x9c) == 0) {
      *pDVar4 = DVar3;
    }
    local_1c = local_1c + iVar1;
    iVar1 = *(int *)(param_1 + 0x9c) + iVar1;
    *(int *)(param_1 + 0x9c) = iVar1;
    if (((1 < iVar1) && ((short)pDVar4[1] + 2 <= iVar1)) &&
       (*(undefined4 *)(param_1 + 0x9c) = 0, (short)pDVar4[1] != 0)) {
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
      *(int *)(param_1 + 0xa8) =
           (*(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xa8)) % *(int *)(param_1 + 0xa4);
      if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
        (**(code **)(param_1 + 0x3c))(param_1,(int)pDVar4 + 6,(int)(short)pDVar4[1],*pDVar4);
      }
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
      *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) | 1;
    }
    iVar1 = *(int *)(param_1 + 0x94);
  }
  *(undefined4 *)(param_1 + 0x94) = 5;
LAB_0084e3ab:
  if (*(int *)(param_1 + 0x94) == 4) {
    if (((*(int *)(param_1 + 0xb8) < 0) && (*(int *)(param_1 + 0xc4) == *(int *)(param_1 + 200))) &&
       (DVar3 = GetTickCount(), *(int *)(param_1 + 0xd4) + 0x32U < DVar3)) {
      pDVar4 = (DWORD *)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xc4));
      DVar3 = GetTickCount();
      *pDVar4 = DVar3;
      *(undefined2 *)(pDVar4 + 1) = 0;
      *(int *)(param_1 + 0xc4) =
           (*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0xc4)) % *(int *)(param_1 + 0xc0);
    }
    iVar1 = *(int *)(param_1 + 0x94);
    while (iVar1 == 4) {
      if (*(int *)(param_1 + 0xb8) < 0) {
        if (*(int *)(param_1 + 0xc4) == *(int *)(param_1 + 200)) break;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        if (*(code **)(param_1 + 0x38) != (code *)0x0) {
          iVar1 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 200);
          (**(code **)(param_1 + 0x38))(param_1,iVar1 + 6,(int)*(short *)(iVar1 + 4),0);
        }
      }
      iVar2 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 200);
      iVar1 = FUN_0084b110(*(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0xb8) + 4 + iVar2,
                           ((int)*(short *)(iVar2 + 4) - *(int *)(param_1 + 0xb8)) + 2,0,0,0);
      if (iVar1 < 1) break;
      DVar3 = GetTickCount();
      *(DWORD *)(param_1 + 0xd4) = DVar3;
      iVar1 = *(int *)(param_1 + 0xb8) + iVar1;
      *(int *)(param_1 + 0xb8) = iVar1;
      if (iVar1 == *(short *)(iVar2 + 4) + 2) {
        *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
        *(int *)(param_1 + 200) =
             (*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 200)) % *(int *)(param_1 + 0xc0);
      }
      iVar1 = *(int *)(param_1 + 0x94);
    }
  }
  if ((*(int *)(param_1 + 0x210) == 0) && (*(int *)(param_1 + 0x214) != 0)) {
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    if (*(code **)(param_1 + 0x218) != (code *)0x0) {
      (**(code **)(param_1 + 0x218))(param_1,*(int *)(param_1 + 0x214));
    }
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return local_1c;
}

