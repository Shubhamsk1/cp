sett<int> a;
	sett<int> b;
	int i=0;
	for(int i=0;i<n-1;i+=2){
		a.insert(arr[i]+1);
		b.insert(arr[i+1]+1);
	}
	if(i==n-1){
		a.insert(arr[n-1]+1);
	}
	int max1=*max_element(a.begin(),a.end());
	int max2=*max_element(b.begin(), b.end());
	int p=0,q=0;
	for(int i=1;i<=max1+1;i++){
		if(a.find(i)==a.end()){
			p=i;
			break;
		}

	}
	for(int i=1;i<=max2+1;i++){
		if(b.find(0)==b.end()){
			q=i;
			break;
		}

	}
	cout<<p-1+q-1;