/* speed.exe 0083e860 FUN_0083e860; analysis pseudocode, not buildable source.
 * calls 0084d0f0 FUN_0084d0f0
 * calls 0084d340 FUN_0084d340
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 0083e650 FUN_0083e650
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0083e860(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint local_108;
  char local_104 [256];
  undefined4 local_4;
  
  uVar5 = 0;
  local_4 = DAT_00906980;
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 0xd8);
    do {
      if (*piVar4 != 0) break;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar2 < 4);
    if (iVar2 == 4) {
      uVar3 = FUN_0084d0f0(*(int *)(param_1 + 0xa8),"GmUtil",param_1 + 0x24,&local_108,0);
      if (uVar3 != 0) {
        if (local_108 < uVar3) {
          *(uint *)(param_1 + 0xb8) = local_108;
          *(uint *)(param_1 + 0xb0) = uVar3;
          _sprintf(local_104,"%d.%d.%d.%d%s",uVar3 >> 0x18,uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,
                   uVar3 & 0xff);
          FUN_0083e650(param_1,*(uint *)(param_1 + 0xc4) | 2,local_104);
        }
        else {
          *(uint *)(param_1 + 0xb0) = local_108;
          *(uint *)(param_1 + 0xb8) = uVar3;
          _sprintf(local_104,"%s",param_1 + 0x24);
          FUN_0083e650(param_1,*(uint *)(param_1 + 0xc4) | 1,local_104);
        }
      }
    }
  }
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0xd8);
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if (uVar5 == 0) {
        uVar5 = (**(code **)(iVar2 + 0x28))(iVar2);
      }
      iVar2 = (**(code **)(*piVar4 + 0x24))(*piVar4);
      if (iVar2 == 3) {
        if (piVar4[1] == 0) {
          piVar4[1] = uVar5;
        }
        if ((uint)(piVar4[2] + piVar4[1]) <= uVar5) {
          iVar2 = uVar3 + 0x12;
          piVar4 = (int *)(param_1 + iVar2 * 0xc);
          *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(*(int *)(param_1 + iVar2 * 0xc) + 0x70);
          *(uint *)(param_1 + 0xb4) = (uint)*(ushort *)(*piVar4 + 0x78);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*piVar4 + 0x74);
          *(uint *)(param_1 + 0xbc) = (uint)*(ushort *)(*piVar4 + 0x7a);
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*piVar4 + 0x48);
          if ((int)uVar3 < 0) {
            return 0;
          }
          uVar5 = 0;
          piVar4 = (int *)(param_1 + 0xd8);
          local_108 = uVar3;
          do {
            if ((uVar5 != local_108) && (iVar1 = *piVar4, iVar1 != 0)) {
              (**(code **)(iVar1 + 4))(iVar1);
              *piVar4 = 0;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 3;
          } while ((int)uVar5 < 4);
          if (*(int *)(param_1 + 0xa4) != 0) {
            FUN_0084d340(*(int *)(param_1 + 0xa4));
            *(undefined4 *)(param_1 + 0xa4) = 0;
          }
          if (*(int *)(param_1 + 0xa8) != 0) {
            FUN_0084d340(*(int *)(param_1 + 0xa8));
            *(undefined4 *)(param_1 + 0xa8) = 0;
          }
          return *(undefined4 *)(param_1 + iVar2 * 0xc);
        }
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 3;
    if (3 < (int)uVar3) {
      return 0;
    }
  } while( true );
}

