while(!st.empty() and arr[st.top()]<=arr[i])
			st.pop();

		if(st.empty())
			cout<<i+1<<" ";
		else
			cout<<i-st.top();

		st.push(i);