/* speed.exe 006d6000 FUN_006d6000; analysis pseudocode, not buildable source.
 * calls 00652ac0 _malloc
 * calls 007e7d7c D3DXCreateEffectPool
 * calls 006c3d20 FUN_006c3d20
 * calls 006d5c10 FUN_006d5c10
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d6000(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087e40a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _DAT_00982c88 = FUN_00460bf0("WINDOWREFLECTION");
  (**(code **)(*DAT_00982bdc + 0x1c))(DAT_00982bdc,&DAT_0093d918);
  bVar4 = (DAT_0093d958 & 0x20000) != 0;
  DAT_009018a0 = (uint)bVar4;
  if ((DAT_0093d958 & 0x400) != 0) {
    DAT_009018a0 = bVar4 + 1;
  }
  if ((int)DAT_009018a0 < (int)DAT_00901818) {
    DAT_00901818 = DAT_009018a0;
  }
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)0x0;
    switch(iVar2) {
    case 0:
    case 3:
    case 6:
    case 7:
    case 8:
    case 0xe:
    case 0xf:
    case 0x12:
    case 0x1e:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x0;
      if (puVar1 == (undefined4 *)0x0) {
LAB_006d6358:
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_006c3d20();
        *puVar1 = &PTR_FUN_008af204;
      }
      break;
    case 1:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x4;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af234;
      break;
    case 2:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x5;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af240;
      break;
    case 4:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x6;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af24c;
      break;
    case 5:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x3;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af228;
      break;
    case 9:
    case 10:
    case 0x11:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x1;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af210;
      break;
    case 0xb:
    case 0xc:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x8;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af264;
      break;
    case 0xd:
    case 0x10:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x9;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af270;
      break;
    case 0x13:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x2;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af21c;
      break;
    case 0x14:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0xa;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af27c;
      break;
    case 0x15:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0xb;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af288;
      break;
    case 0x16:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0xc;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af294;
      break;
    case 0x17:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0x7;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af258;
      break;
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      puVar1 = _malloc(0x50);
      pvStack_c = (void *)0xd;
      if (puVar1 == (undefined4 *)0x0) goto LAB_006d6358;
      FUN_006c3d20();
      *puVar1 = &PTR_FUN_008af2a0;
      break;
    default:
      goto switchD_006d6092_default;
    }
    pvStack_c = (void *)0xffffffff;
switchD_006d6092_default:
    (&DAT_0093de78)[iVar2] = puVar1;
    iVar2 = iVar2 + 1;
    if (0x1e < iVar2) {
      piVar5 = DAT_00982bdc;
      (**(code **)(*DAT_00982bdc + 0x1c))(DAT_00982bdc,&DAT_0093d918);
      (**(code **)(*DAT_00982bd8 + 0x14))(DAT_00982bd8,DAT_00982c14,2,&DAT_0093d470);
      D3DXCreateEffectPool(&DAT_00982c84);
      iVar2 = 0;
      do {
        FUN_006d5c10(iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x1f);
      DAT_00982c7c = 1;
      piVar3 = &DAT_0093de78;
      do {
        (**(code **)(**(int **)(*piVar3 + 0x48) + 0x114))(*(int **)(*piVar3 + 0x48));
        (**(code **)(**(int **)(*piVar3 + 0x48) + 8))(*(int **)(*piVar3 + 0x48));
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        *(undefined4 *)(iVar2 + 0x48) = 0;
      } while ((int)piVar3 < 0x93def4);
      if (DAT_00982c84 != (int *)0x0) {
        (**(code **)(*DAT_00982c84 + 8))(DAT_00982c84);
        DAT_00982c84 = (int *)0x0;
      }
      ExceptionList = piVar5;
      return;
    }
  } while( true );
}

