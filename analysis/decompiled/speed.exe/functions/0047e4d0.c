/* speed.exe 0047e4d0 FUN_0047e4d0; analysis pseudocode, not buildable source.
 * calls 0046f7c0 FUN_0046f7c0
 * calls 007c4b80 FUN_007c4b80
 * calls 007897c0 FUN_007897c0
 * calls 00633dc0 FUN_00633dc0
 * calls 00633d80 FUN_00633d80
 * calls 00633d90 FUN_00633d90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047e4d0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    cVar2 = FUN_00633d80();
    while (cVar2 == '\0') {
      FUN_00633dc0(&local_2c);
      if (local_2c == (undefined4 *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = local_2c[2];
      }
      FUN_0046f7c0(&local_34,local_30);
      local_38 = local_34;
      if (local_2c == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *local_2c;
      }
      switch(uVar4) {
      case 0x35:
        *(float *)(param_1 + 0x80) = local_34 * _DAT_0089481c;
        break;
      case 0x36:
        *(float *)(param_1 + 0x80) = local_34 * _DAT_00894b68;
        break;
      case 0x37:
      case 0x3b:
        local_38 = local_34 * _DAT_00890da8;
      case 0x38:
      case 0x3c:
        *(float *)(param_1 + 0x8c) = local_38 * _DAT_00895084;
        break;
      case 0x3a:
        local_38 = local_34 * _DAT_00890da8;
      case 0x39:
        *(float *)(param_1 + 0x88) = local_38 * _DAT_00894b64;
        break;
      case 0x3e:
        local_38 = local_34 * _DAT_00890da8;
      case 0x3d:
        *(float *)(param_1 + 0x84) = local_38 * _DAT_00890da8 * _DAT_00894b64;
        break;
      case 0x40:
      case 0x44:
      case 0x3f:
      case 0x43:
        uVar3 = FUN_007c4b80();
        *(undefined2 *)(param_1 + 0x92) = uVar3;
        break;
      case 0x41:
      case 0x45:
      case 0x42:
      case 0x46:
        uVar3 = FUN_007c4b80();
        *(undefined2 *)(param_1 + 0x90) = uVar3;
        break;
      case 0x47:
        if (local_34 == _DAT_00890968) {
          DAT_00911098 = 0;
        }
        else {
          DAT_00911098 = 1;
        }
        break;
      case 0x48:
        if (local_34 == _DAT_00890968) {
          DAT_0091109c = 0;
        }
        else {
          DAT_0091109c = 1;
        }
        break;
      case 0x49:
        iVar1 = *(int *)(param_1 + 0x1c);
        local_1c = *(float *)(iVar1 + 0x48);
        local_18 = *(undefined4 *)(iVar1 + 0x40);
        local_20 = -*(float *)(iVar1 + 0x44);
        if (((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) &&
           (piVar5 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))(), piVar5 != (int *)0x0)) {
          uStack_28 = 0;
          uStack_24 = 3;
          FUN_007897c0(&local_20,&local_1c,0);
          local_1c = local_1c + _DAT_008945ec;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
          (**(code **)(*piVar5 + 0x5c))(&local_20);
        }
      }
      FUN_00633d90();
      cVar2 = FUN_00633d80();
    }
  }
  return;
}

