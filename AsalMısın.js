function AsalMısınEy (sayı)
{
	bölenSayısı = 0;

	for (bölen = 1; bölen <= sayı; bölen++)
	{
		if (sayı % bölen == 0)
			bölenSayısı++;
		if (bölenSayısı >= 3)	break;
    
    /* break komutunu kullanarak 3 ten daha fazla sayıda böleni olan sayılarda for döngüsünü bitiriyoruz.
    Çünkü 3 ten ne kadar daha fazla sayıda böleni olursa olsun, o sayı 2 den fazla böleni olduğu için asaldır.
    Bu da çok büyük sayıların asal olup olmadıklarını hesaplamak için büyük performans artışları sağlar. */
	
  }

	if (bölenSayısı == 2)
	{
		console.log("Evet, Ben %d Asalım ve Asilim :)", sayı);
	}
	else
	{
		console.log("Hayır, Ben %d Asal Değilim :(", sayı);
	}
}
